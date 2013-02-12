/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIUserDictionaryWord : NSManagedObject {
    NSString *_sectionIndex;
}

@property(copy) NSString * sectionIndex;
@property(copy) NSString * shortcut;
@property(copy) NSString * target;

+ (id)entityDescription;
+ (id)predicateFilteringForSearchText:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1 shortcut:(id)arg2;
+ (id)sortDescriptors;
+ (BOOL)userWord:(id)arg1 duplicatesTarget:(id)arg2 andShortcut:(id)arg3;
+ (int)validateWithNewTarget:(id)arg1 newShortcut:(id)arg2 otherWords:(id)arg3;

- (id)changeDescription;
- (id)changeDescriptionKey:(id)arg1;
- (int)compare:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)filteredValues:(id)arg1;
- (BOOL)hasChangesToTargetOrShortcut;
- (id)sectionIndex;
- (void)setSectionIndex:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)takeValuesFrom:(id)arg1 overwriteExistingValues:(BOOL)arg2;
- (void)updateTimestamp;

@end