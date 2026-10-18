#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ResolvedTypes {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mBoolType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mVoidType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mNullptrType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mErrorType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mBaseErrorType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mResultAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mReferenceToBoolVector;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mInt64Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mUint64Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mInt32Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mUint32Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mInt16Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mUint16Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mInt8Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mUint8Type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mFloatType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mDoubleType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mStringType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mJSONType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mClosureAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mDataBufferAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mFutureAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mFutureVoidType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mGeneratorAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mPromiseAnyType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mObjectHandleType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mStrongObjectHandleType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mWeakObjectHandleType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mLifetimeRegistryType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mWeakLifetimeScopeType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mScriptObjectFactoryType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mDependencyLocatorType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mContextConfigType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mClosureType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mFutureType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mPromiseType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mGeneratorType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mDataBufferTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mFutureTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mGeneratorTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mGeneratorIteratorTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mTypedObjectHandleTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mWeakTypedObjectHandleTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mStrongTypedObjectHandleTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mDefaultClosureTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mRestrictedExecClosureTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mEarlyExecClosureTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mClosureGenericTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mResultTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mResultDeprecatedTemplateType;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mPromiseTemplateType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk325076;
    ::ll::UntypedStorage<8, 16> mUnk49d5e1;
    ::ll::UntypedStorage<8, 16> mUnkea9075;
    ::ll::UntypedStorage<8, 16> mUnk8edfee;
    ::ll::UntypedStorage<8, 16> mUnk76c7ba;
    ::ll::UntypedStorage<8, 16> mUnkd64858;
    ::ll::UntypedStorage<8, 16> mUnk588f54;
    ::ll::UntypedStorage<8, 16> mUnk33587f;
    ::ll::UntypedStorage<8, 16> mUnkf8870e;
    ::ll::UntypedStorage<8, 16> mUnkf3aa4c;
    ::ll::UntypedStorage<8, 16> mUnk92066b;
    ::ll::UntypedStorage<8, 16> mUnk4ff0a2;
    ::ll::UntypedStorage<8, 16> mUnk1944e5;
    ::ll::UntypedStorage<8, 16> mUnkd89d7c;
    ::ll::UntypedStorage<8, 16> mUnkfc4abc;
    ::ll::UntypedStorage<8, 16> mUnk5556cd;
    ::ll::UntypedStorage<8, 16> mUnk8968c2;
    ::ll::UntypedStorage<8, 16> mUnk9504b5;
    ::ll::UntypedStorage<8, 16> mUnkdf490d;
    ::ll::UntypedStorage<8, 16> mUnk9a2ded;
    ::ll::UntypedStorage<8, 16> mUnk8fc620;
    ::ll::UntypedStorage<8, 16> mUnk981ab5;
    ::ll::UntypedStorage<8, 16> mUnk320ded;
    ::ll::UntypedStorage<8, 16> mUnkee3dff;
    ::ll::UntypedStorage<8, 16> mUnkdae8f8;
    ::ll::UntypedStorage<8, 16> mUnk320f89;
    ::ll::UntypedStorage<8, 16> mUnkc007f3;
    ::ll::UntypedStorage<8, 16> mUnk8b742d;
    ::ll::UntypedStorage<8, 16> mUnkf440e3;
    ::ll::UntypedStorage<8, 16> mUnk7425ba;
    ::ll::UntypedStorage<8, 16> mUnkb706ea;
    ::ll::UntypedStorage<8, 16> mUnk68f8e9;
    ::ll::UntypedStorage<8, 16> mUnk2eb80b;
    ::ll::UntypedStorage<8, 16> mUnkaf41d5;
    ::ll::UntypedStorage<8, 16> mUnke77845;
    ::ll::UntypedStorage<8, 16> mUnk14a79a;
    ::ll::UntypedStorage<8, 16> mUnkb43fed;
    ::ll::UntypedStorage<8, 16> mUnk51b30f;
    ::ll::UntypedStorage<8, 16> mUnkd1b6a8;
    ::ll::UntypedStorage<8, 16> mUnk8134d4;
    ::ll::UntypedStorage<8, 16> mUnk3ce14c;
    ::ll::UntypedStorage<8, 16> mUnkdab225;
    ::ll::UntypedStorage<8, 16> mUnk4ad5e7;
    ::ll::UntypedStorage<8, 16> mUnkeded51;
    ::ll::UntypedStorage<8, 16> mUnk52348d;
    ::ll::UntypedStorage<8, 16> mUnk114a95;
    ::ll::UntypedStorage<8, 16> mUnk98fdb3;
    ::ll::UntypedStorage<8, 16> mUnkab87ec;
    ::ll::UntypedStorage<8, 16> mUnkeb3a2a;
    ::ll::UntypedStorage<8, 16> mUnkdfd0b5;
    ::ll::UntypedStorage<8, 16> mUnka1e891;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResolvedTypes& operator=(ResolvedTypes const&);
    ResolvedTypes(ResolvedTypes const&);
    ResolvedTypes();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isPrivilegedClosureTemplateType(::entt::meta_type const&) const;
#else // @header-generator platform
    MCNAPI bool isPrivilegedClosureTemplateType(::entt::meta_type const& type) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
