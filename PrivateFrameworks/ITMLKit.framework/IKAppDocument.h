/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSError, NSString, IKViewElement, IKHeadElement, IKDOMDocument, <IKAppDocumentDelegate>, IKAppContext, JSManagedValue, IKJSNavigationDocument, IKJSObject;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridge> {
    bool_updated;
    bool_subtreeUpdated;
    IKAppContext *_appContext;
    IKDOMDocument *_jsDocument;
    <IKAppDocumentDelegate> *_delegate;
    NSString *_identifier;
    IKHeadElement *_headElement;
    IKViewElement *_navigationBarElement;
    IKViewElement *_templateElement;
    NSString *_clientDocumentIdentifier;
    NSError *_error;
    IKJSObject *_owner;
    JSManagedValue *_jsManagedDocument;
}

@property <IKAppDocumentDelegate> * delegate;
@property(retain) NSString * identifier;
@property(retain) IKHeadElement * headElement;
@property(retain) IKViewElement * navigationBarElement;
@property(retain) IKViewElement * templateElement;
@property(retain) NSString * clientDocumentIdentifier;
@property(retain) NSError * error;
@property(getter=isUpdated) bool updated;
@property(getter=isSubtreeUpdated) bool subtreeUpdated;
@property(readonly) IKAppContext * appContext;
@property(readonly) IKDOMDocument * jsDocument;
@property(readonly) IKJSObject * owner;
@property(readonly) IKJSNavigationDocument * navigationDocument;
@property(retain) JSManagedValue * jsManagedDocument;


- (void)setJsManagedDocument:(id)arg1;
- (void)setClientDocumentIdentifier:(id)arg1;
- (id)headElement;
- (id)clientDocumentIdentifier;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (void)onUpdate;
- (void)onNeedsUpdateWithCompletion:(id)arg1;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;
- (void)scrollToTop;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (void)updateForDocument:(id)arg1;
- (bool)isSubtreeUpdated;
- (void)setSubtreeUpdated:(bool)arg1;
- (void)setNavigationBarElement:(id)arg1;
- (id)navigationBarElement;
- (void)setHeadElement:(id)arg1;
- (void)setTemplateElement:(id)arg1;
- (bool)_clearUpdatesForElement:(id)arg1;
- (id)templateElement;
- (id)navigationDocument;
- (id)jsManagedDocument;
- (void)_updateWithXML:(id)arg1;
- (id)jsDocument;
- (id)appContext;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(id)arg2;
- (void)onDisappear;
- (void)onAppear;
- (void)onLoad;
- (void)onUnload;
- (void)setUpdated:(bool)arg1;
- (id)owner;
- (bool)isUpdated;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (void).cxx_destruct;

@end