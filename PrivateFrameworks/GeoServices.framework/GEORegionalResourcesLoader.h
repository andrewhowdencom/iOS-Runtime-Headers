/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSMutableSet, NSSet, NSString;

@interface GEORegionalResourcesLoader : NSObject <_GEORegionalResourcesRequestDelegate> {
    BOOL _allowsNetwork;
    NSString *_baseURLString;
    id _completionHandler;
    id _errorHandler;
    id _keyProgressHandler;
    id _listProgressHandler;
    NSMutableArray *_requests;
    NSMutableSet *_resourceIdentifiersToLoad;
    BOOL _started;
    NSString *_targetDirectory;
}

@property BOOL allowsNetwork;
@property(readonly) NSSet * tileKeyLists;

- (void)_handleCompletedResource:(id)arg1;
- (void)_loadNextResource;
- (id)_pathForResourceIdentifier:(id)arg1;
- (void)addResourceIdentifiers:(id)arg1 forTileKeys:(id)arg2 fromList:(id)arg3;
- (BOOL)allowsNetwork;
- (void)cancelForTileKeys:(id)arg1;
- (void)dealloc;
- (id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2;
- (void)request:(id)arg1 didFinishLoadForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2 resourceIdentifiers:(id)arg3;
- (void)requestDidFinish:(id)arg1;
- (void)setAllowsNetwork:(BOOL)arg1;
- (void)startWithKeyProgressHandler:(id)arg1 listProgressHandler:(id)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4;
- (id)tileKeyLists;

@end