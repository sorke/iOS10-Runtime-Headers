/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardQuickTypeSpecialization : TIKeyboardFeatureSpecialization

- (struct TIInputManagerZephyr { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; bool x6; bool x7; struct __CFString {} *x8; struct __CFLocale {} *x9; struct LockedInput { unsigned int x_10_1_1; unsigned int x_10_1_2; } x10; struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer {} *x_11_1_1; } x11; bool x12; bool x13; struct StrokeBuildManager {} *x14; struct String { unsigned short x_15_1_1; unsigned short x_15_1_2; unsigned short x_15_1_3; unsigned char x_15_1_4; char *x_15_1_5; BOOL x_15_1_6[16]; } x15; bool x16; bool x17; bool x18; bool x19; struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; unsigned int x21; struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { unsigned long long x_22_1_1; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { struct RefPtr<TI::Favonius::LayoutKey> {} *x_2_2_1; unsigned long long x_2_2_2; } x_22_1_2; } x22; bool x23; struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout {} *x_24_1_1; } x24; struct String { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; unsigned char x_25_1_4; char *x_25_1_5; BOOL x_25_1_6[16]; } x25; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_1_2_1; struct TITokenID {} *x_1_2_2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_3_1; } x_1_2_3; } x_26_1_1; unsigned long long x_26_1_2; unsigned long long x_26_1_3; } x26; struct shared_ptr<KB::InputManagerSpecialization> { struct InputManagerSpecialization {} *x_27_1_1; struct __shared_weak_count {} *x_27_1_2; } x27; id /* block */ x28; struct shared_ptr<KB::TypologyLogger> { struct TypologyLogger {} *x_29_1_1; struct __shared_weak_count {} *x_29_1_2; } x29; bool x30; }*)createInputManager;
- (bool)doesComposeText;

@end