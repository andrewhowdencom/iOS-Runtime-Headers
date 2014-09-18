/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCaptureSourceFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSDictionary *_faceDetectionConfiguration;
    int _imageControlMode;
    FigCaptureSourceFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    struct OpaqueFigCaptureSource { } *_source;
    NSDictionary *_sourceAttributes;
    NSString *_sourceID;
    int _sourceType;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    bool_applyMaxIntegrationTimeOverrideWhenAvailable;
    bool_automaticallyEnablesLowLightBoostWhenAvailable;
    bool_sensorHDREnabled;
}

@property bool applyMaxIntegrationTimeOverrideWhenAvailable;
@property bool automaticallyEnablesLowLightBoostWhenAvailable;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSDictionary * faceDetectionConfiguration;
@property(readonly) unsigned long long hash;
@property int imageControlMode;
@property(retain) FigCaptureSourceFormat * requiredFormat;
@property float requiredMaxFrameRate;
@property float requiredMinFrameRate;
@property bool sensorHDREnabled;
@property(readonly) struct OpaqueFigCaptureSource { }* source;
@property(copy) NSString * sourceID;
@property(readonly) int sourcePosition;
@property(readonly) int sourceType;
@property(readonly) Class superclass;
@property float videoZoomFactor;
@property float videoZoomRampAcceleration;

+ (void)initialize;
+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;

- (bool)_isCameraSource;
- (id)_sourceAttributes;
- (int)_sourceToken;
- (id)_sourceUID;
- (bool)applyMaxIntegrationTimeOverrideWhenAvailable;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)faceDetectionConfiguration;
- (int)imageControlMode;
- (id)initWithSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requiredFormat;
- (float)requiredMaxFrameRate;
- (float)requiredMinFrameRate;
- (bool)sensorHDREnabled;
- (void)setApplyMaxIntegrationTimeOverrideWhenAvailable:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setRequiredFormat:(id)arg1;
- (void)setRequiredMaxFrameRate:(float)arg1;
- (void)setRequiredMinFrameRate:(float)arg1;
- (void)setSensorHDREnabled:(bool)arg1;
- (void)setSourceID:(id)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (struct OpaqueFigCaptureSource { }*)source;
- (id)sourceID;
- (int)sourcePosition;
- (int)sourceType;
- (float)videoZoomFactor;
- (float)videoZoomRampAcceleration;

@end