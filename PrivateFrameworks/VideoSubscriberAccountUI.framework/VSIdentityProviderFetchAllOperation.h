/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation <VSIdentityProviderFetchAllResult> {
    VSOptional * _result;
    NSOperationQueue * _subqueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) NSOperationQueue *subqueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setResult:(id)arg1;
- (void)setSubqueue:(id)arg1;
- (id)subqueue;

@end
