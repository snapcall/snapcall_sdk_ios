// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import CallKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;
@class UIImage;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC18Snapcall_Framework15Snapcall_Button")
@interface Snapcall_Button : UIButton
@property (nonatomic, copy) NSString * _Nonnull Bid;
@property (nonatomic, copy) NSString * _Null_unspecified logocall;
@property (nonatomic) uint8_t R;
@property (nonatomic) uint8_t G;
@property (nonatomic) uint8_t B;
@property (nonatomic) BOOL UseVideo;
@property (nonatomic) BOOL UseSandbox;
@property (nonatomic) BOOL MODBID;
@property (nonatomic) BOOL MODINCOMING;
@property (nonatomic) BOOL MODOUTGOING;
@property (nonatomic) BOOL MODPHANTOM;
@property (nonatomic, copy) NSString * _Nonnull contactName;
@property (nonatomic, copy) NSString * _Nonnull contactBrand;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setValue:(id _Nullable)value forKey:(NSString * _Nonnull)key;
- (void)setBackgroundImage:(UIImage * _Nullable)image forState:(UIControlState)state;
- (void)setImage:(UIImage * _Nullable)image forState:(UIControlState)state;
- (void)prepareForInterfaceBuilder;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class AVAudioSession;

SWIFT_CLASS("_TtC18Snapcall_Framework21Snapcall_Call_Handler")
@interface Snapcall_Call_Handler : NSObject
- (void)audioSessionDidActivate:(AVAudioSession * _Nonnull)session;
- (void)audioSessionDidDeactivate:(AVAudioSession * _Nonnull)session;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Snapcall_Call_Handler (SWIFT_EXTENSION(Snapcall_Framework))
@end

@class CXProvider;
@class CXEndCallAction;
@class CXStartCallAction;
@class CXAnswerCallAction;
@class CXSetHeldCallAction;
@class CXAction;
@class CXPlayDTMFCallAction;
@class CXSetGroupCallAction;
@class CXSetMutedCallAction;
@class CXTransaction;

@interface Snapcall_Call_Handler (SWIFT_EXTENSION(Snapcall_Framework)) <CXProviderDelegate>
- (void)providerDidBegin:(CXProvider * _Nonnull)provider;
- (void)providerDidReset:(CXProvider * _Nonnull)provider;
- (void)provider:(CXProvider * _Nonnull)provider performEndCallAction:(CXEndCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider performStartCallAction:(CXStartCallAction * _Nonnull)action;
- (void)waitforAsignalWithUUID:(NSString * _Nonnull)UUID;
- (void)provider:(CXProvider * _Nonnull)provider performAnswerCallAction:(CXAnswerCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider performSetHeldCallAction:(CXSetHeldCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider timedOutPerformingAction:(CXAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider performPlayDTMFCallAction:(CXPlayDTMFCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider performSetGroupCallAction:(CXSetGroupCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider performSetMutedCallAction:(CXSetMutedCallAction * _Nonnull)action;
- (void)provider:(CXProvider * _Nonnull)provider didActivateAudioSession:(AVAudioSession * _Nonnull)audioSession;
- (void)provider:(CXProvider * _Nonnull)provider didDeactivateAudioSession:(AVAudioSession * _Nonnull)audioSession;
- (BOOL)provider:(CXProvider * _Nonnull)provider executeTransaction:(CXTransaction * _Nonnull)transaction SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC18Snapcall_Framework22Snapcall_PeerConnexion")
@interface Snapcall_PeerConnexion : Snapcall_Call_Handler
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC18Snapcall_Framework21Snapcall_Socket_Event")
@interface Snapcall_Socket_Event : Snapcall_PeerConnexion
+ (Snapcall_Socket_Event * _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)Clean;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Snapcall_Socket_Event (SWIFT_EXTENSION(Snapcall_Framework))
@end


@interface Snapcall_Socket_Event (SWIFT_EXTENSION(Snapcall_Framework))
@end


@interface Snapcall_Socket_Event (SWIFT_EXTENSION(Snapcall_Framework))
@end

#pragma clang diagnostic pop
