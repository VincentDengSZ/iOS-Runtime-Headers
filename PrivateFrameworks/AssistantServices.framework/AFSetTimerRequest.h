/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFTimer;

@interface AFSetTimerRequest : AFSiriRequest {
    AFTimer *_timer;
}

@property(retain) AFTimer * timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end