#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources::Archive { class Reader; }
// clang-format on

namespace Bedrock::Resources {

class PreloadedPathHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                                     mRoot;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Resources::Archive::Reader>> mBackingObject;
    ::ll::UntypedStorage<8, 24>                                                     mSubPacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PreloadedPathHandle(::Bedrock::Resources::PreloadedPathHandle const&);

    MCNAPI void forEach(::brstd::function_ref<void(const Core::Path&)>) const;

    MCNAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Resources::PreloadedPathHandle const&);
    // NOLINTEND
};

} // namespace Bedrock::Resources
