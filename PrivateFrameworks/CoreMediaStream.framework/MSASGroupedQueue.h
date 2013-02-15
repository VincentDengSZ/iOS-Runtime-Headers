/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASServerSideModel, MSTimerGate, NSObject<OS_dispatch_queue>;

@interface MSASGroupedQueue : NSObject {
    MSTimerGate *_idleTimerGate;
    BOOL _isAssertingBusyAssertion;
    BOOL _isShuttingDown;
    int _maxGroupedCallbackEventBatchCount;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
    NSObject<OS_dispatch_queue> *_memberQueue;
    MSASServerSideModel *_model;
    MSTimerGate *_stalenessTimerGate;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) MSTimerGate * idleTimerGate;
@property(readonly) BOOL isAssertingBusyAssertion;
@property BOOL isShuttingDown;
@property int maxGroupedCallbackEventBatchCount;
@property double maxGroupedCallbackEventIdleInterval;
@property double maxGroupedCallbackEventStaleness;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property MSASServerSideModel * model;
@property(retain) MSTimerGate * stalenessTimerGate;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)assertBusyAssertion;
- (void)dealloc;
- (void)deassertBusyAssertion;
- (void)flushQueueCompletionBlock:(id)arg1;
- (BOOL)hasEnqueuedItems;
- (id)idleTimerGate;
- (id)init;
- (BOOL)isAssertingBusyAssertion;
- (BOOL)isShuttingDown;
- (int)maxGroupedCallbackEventBatchCount;
- (double)maxGroupedCallbackEventIdleInterval;
- (double)maxGroupedCallbackEventStaleness;
- (id)memberQueue;
- (BOOL)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1;
- (id)model;
- (void)setIdleTimerGate:(id)arg1;
- (void)setIsShuttingDown:(BOOL)arg1;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setStalenessTimerGate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownFlush:(BOOL)arg1 completionBlock:(id)arg2;
- (id)stalenessTimerGate;
- (id)workQueue;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueClearIdleTimer;
- (void)workQueueClearStalenessTimer;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueFlushQueue;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;

@end