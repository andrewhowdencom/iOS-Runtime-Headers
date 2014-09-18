/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputFalloff;
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputRadius;
}

@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputFalloff;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputIntensity;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_negkernel;
- (id)_poskernel;
- (id)inputCenter;
- (id)inputFalloff;
- (id)inputImage;
- (id)inputIntensity;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputFalloff:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end