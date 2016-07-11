/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol> {
    PBItemCollection * _itemCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBItemCollection *itemCollection;
@property (readonly) Class superclass;

+ (id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2;

- (void).cxx_destruct;
- (void)helloCompletionBlock:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 itemCollection:(id)arg2;
- (id)itemCollection;
- (void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setItemCollection:(id)arg1;

@end