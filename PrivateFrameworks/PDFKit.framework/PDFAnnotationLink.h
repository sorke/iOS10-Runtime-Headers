/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars * _private2;
}

- (void).cxx_destruct;
- (id)URL;
- (bool)addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addHighlightingModeToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createPillBezier:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)destination;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (bool)isHighlighted;
- (int)mouseDownStyle;
- (id)mouseUpAction;
- (void)secondaryInit;
- (void)setDestination:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMouseDownStyle:(int)arg1;
- (void)setURL:(id)arg1;

@end