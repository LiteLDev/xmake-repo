#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/XAsyncBlock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct XTaskQueueObject;
#else // @header-generator platform
struct XAsyncBlock;
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Threading::AsyncResult {

#if defined(LL_PLAT_A) // @header-generator platform
class ToXAsyncBlock : public ::Bedrock::Threading::AsyncResultBase<XAsyncBlock*> {
#else // @header-generator platform
class ToXAsyncBlock : public ::Bedrock::Threading::AsyncResultBase<::XAsyncBlock*> {
#endif // @header-generator platform
public:
    // ToXAsyncBlock inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Context = std::weak_ptr<Bedrock::Threading::AsyncResult::ToXAsyncBlock>;
#else // @header-generator platform
    using Context = ::std::weak_ptr<::Bedrock::Threading::AsyncResult::ToXAsyncBlock>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<XAsyncBlock>> mAsyncBlock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::weak_ptr<Bedrock::Threading::AsyncResult::ToXAsyncBlock>>> mAsyncContext;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::XAsyncBlock>> mAsyncBlock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::weak_ptr<::Bedrock::Threading::AsyncResult::ToXAsyncBlock>>>
        mAsyncContext;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ToXAsyncBlock();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ToXAsyncBlock();
#else // @header-generator platform
    virtual ~ToXAsyncBlock() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ToXAsyncBlock(::XTaskQueueObject*);
#else // @header-generator platform
    MCAPI ::XAsyncBlock* _getAsyncBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::XAsyncBlock* _getAsyncBlock();

    MCNAPI void _handleResult(int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Threading::AsyncResult::ToXAsyncBlock> create(::XTaskQueueObject*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::XTaskQueueObject*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void _handleResult(long hr);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading::AsyncResult
