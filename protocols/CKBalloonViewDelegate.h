/* Generated by RuntimeBrowser.
 */

@protocol CKBalloonViewDelegate <NSObject>

@required

- (BOOL)balloonView:(CKBalloonView *)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)balloonView:(CKBalloonView *)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (void)balloonViewDidFinishDataDetectorAction:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1;
- (void)balloonViewWillResignFirstResponder:(CKBalloonView *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calloutTargetRectForBalloonView:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (NSArray *)menuItemsForBalloonView:(CKBalloonView *)arg1;
- (BOOL)shouldShowMenuForBalloonView:(CKBalloonView *)arg1;

@end