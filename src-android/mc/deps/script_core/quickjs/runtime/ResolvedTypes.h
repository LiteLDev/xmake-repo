#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ResolvedTypes {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isPrivilegedClosureTemplateType(::entt::meta_type const&) const;
    // NOLINTEND
};

} // namespace Scripting::QuickJS
