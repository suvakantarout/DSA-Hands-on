#include <stdio.h>

int main() {
    int frames, pages, page_faults = 0, page_hits = 0, front = 0;
    int pages_array[50], frame_array[10];
    
    printf("Enter the number of frames: ");
    scanf("%d", &frames);
    
    printf("Enter the number of pages: ");
    scanf("%d", &pages);
    
    printf("Enter the reference string (page numbers): ");
    int i;
    for (i = 0; i < pages; i++) {
        scanf("%d", &pages_array[i]);
    }
    
    // Initialize the frame array
    for (i = 0; i < frames; i++) {
        frame_array[i] = -1;
    }
    
    // Start the FIFO page replacement
    for (i = 0; i < pages; i++) {
        int found = 0;
        
        // Check if the current page is already in one of the frames
        int j;
        for (j = 0; j < frames; j++) {
            if (frame_array[j] == pages_array[i]) {
                found = 1;
                page_hits++;  // It's a page hit
                break;
            }
        }
        
        // If page is not found in frames, it's a page fault
        if (!found) {
            frame_array[front] = pages_array[i];
            front = (front + 1) % frames;  // Circular queue behavior
            page_faults++;
        }
        
        // Display the frame array status after each page request
        printf("Page %d: ", pages_array[i]);
        for (j = 0; j < frames; j++) {
            if (frame_array[j] == -1) {
                printf("- ");
            } else {
                printf("%d ", frame_array[j]);
            }
        }
        printf("\n");
    }
    
    // Calculate and display the page hit ratio
    float page_hit_ratio = (float)page_hits / pages;
    printf("\nTotal Page Faults: %d\n", page_faults);
    printf("Total Page Hits: %d\n", page_hits);
    printf("Page Hit Ratio: %.2f\n", page_hit_ratio);
    
    return 0;
}
