/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView {
    UIColor *_fillColor;
    NSInteger _lineCap;
    NSArray *_lineDashPattern;
    float _lineDashPhase;
    NSInteger _lineJoin;
    float _lineWidth;
    float _miterLimit;
    struct CGPath { } *_path;
    UIColor *_strokeColor;
}

@property(retain) UIColor *fillColor;
@property(copy) NSArray *lineDashPattern;
@property CGPath *path;
@property(retain) UIColor *strokeColor;
@property NSInteger lineCap;
@property float lineDashPhase;
@property NSInteger lineJoin;
@property float lineWidth;
@property float miterLimit;

- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (void)createPath;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (id)fillColor;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)invalidatePath;
- (NSInteger)lineCap;
- (id)lineDashPattern;
- (float)lineDashPhase;
- (NSInteger)lineJoin;
- (float)lineWidth;
- (float)miterLimit;
- (struct CGPath { }*)path;
- (void)setFillColor:(id)arg1;
- (void)setLineCap:(NSInteger)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(float)arg1;
- (void)setLineJoin:(NSInteger)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

@end