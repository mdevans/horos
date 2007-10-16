//
//  ITKBrushROIFilter.h
//  OsiriX
//
//  Created by joris on 2/16/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class ROI;

/** \brief Filters brush ROIs
*
*   Filters brush ROI
*   Erode, dilate, open, close
*/

@interface ITKBrushROIFilter : NSObject {

unsigned char *kernelDilate, *kernelErode;
}

// filters
- (void) erode:(ROI*)aROI withStructuringElementRadius:(int)structuringElementRadius;
- (void) dilate:(ROI*)aROI withStructuringElementRadius:(int)structuringElementRadius;
- (void) close:(ROI*)aROI withStructuringElementRadius:(int)structuringElementRadius;
- (void) open:(ROI*)aROI withStructuringElementRadius:(int)structuringElementRadius;

@end
