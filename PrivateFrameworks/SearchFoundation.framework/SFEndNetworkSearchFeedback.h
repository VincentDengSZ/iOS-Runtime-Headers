/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback <SFProtobufObject> {
    NSDictionary * _networkTimingData;
    long long  _responseSize;
    int  _statusCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDictionary *networkTimingData;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(int)arg3 networkTimingData:(id)arg4;
- (id)networkTimingData;
- (long long)responseSize;
- (void)setNetworkTimingData:(id)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end
