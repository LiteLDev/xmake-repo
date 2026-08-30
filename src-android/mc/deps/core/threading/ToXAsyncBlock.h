#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/threading/XAsyncBlock.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading::AsyncResult {

class ToXAsyncBlock : public ::Bedrock::Threading::AsyncResultBase<XAsyncBlock*> {
public:
    // ToXAsyncBlock inner types define
    using Context = std::weak_ptr<Bedrock::Threading::AsyncResult::ToXAsyncBlock>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<XAsyncBlock>> mAsyncBlock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::weak_ptr<Bedrock::Threading::AsyncResult::ToXAsyncBlock>>> mAsyncContext;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ToXAsyncBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToXAsyncBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ToXAsyncBlock(::XTaskQueueObject*);

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
    // NOLINTEND
};

} // namespace Bedrock::Threading::AsyncResult
