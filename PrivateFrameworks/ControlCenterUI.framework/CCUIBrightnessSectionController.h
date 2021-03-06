/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIBrightnessSectionController : CCUIControlCenterSectionViewController {
    struct BKSDisplayBrightnessTransaction { } * _brightnessTransaction;
    CCUIControlCenterSlider * _slider;
    BOOL  _usesCompactHeight;
}

@property (nonatomic) BOOL usesCompactHeight;

+ (Class)viewClass;

- (void).cxx_destruct;
- (float)_backlightLevel;
- (id)_brightnessContentView;
- (void)_noteScreenBrightnessDidChange:(id)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_sliderDidBeginTracking:(id)arg1;
- (void)_sliderDidEndTracking:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (float)_yOffsetFromCenterForSlider;
- (void)dealloc;
- (BOOL)enabled;
- (id)sectionIdentifier;
- (void)setUsesCompactHeight:(BOOL)arg1;
- (BOOL)usesCompactHeight;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
