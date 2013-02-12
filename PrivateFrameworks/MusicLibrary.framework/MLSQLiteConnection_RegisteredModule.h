/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface MLSQLiteConnection_RegisteredModule : NSObject {
    void *_context;
    id _contextReleaseBlock;
    const struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); } *_moduleMethods;
    NSString *_name;
}

@property void* context;
@property(copy) id contextReleaseBlock;
@property(copy) NSString * name;

- (void).cxx_destruct;
- (void*)context;
- (id)contextReleaseBlock;
- (id)name;
- (void)registerOnConnection:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setContextReleaseBlock:(id)arg1;
- (void)setName:(id)arg1;

@end