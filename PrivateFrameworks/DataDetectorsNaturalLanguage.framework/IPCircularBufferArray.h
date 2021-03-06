/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray * _backingStore;
    unsigned int  _capacity;
    unsigned int  _currentIndex;
    id  _lastObject;
    unsigned long  _mutationDetector;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (readonly) unsigned int count;
@property (nonatomic, readonly) id lastObject;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)allObjects;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)lastObject;
- (void)removeAllObjects;

@end
