#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources::Archive { class Reader; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Core { class Path; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Resources {

class PreloadedPathHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                                     mRoot;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Resources::Archive::Reader>> mBackingObject;
    ::ll::UntypedStorage<8, 24>                                                     mSubPacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka9cf92;
    ::ll::UntypedStorage<8, 16> mUnk40a8fb;
    ::ll::UntypedStorage<8, 24> mUnk1003ec;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PreloadedPathHandle& operator=(PreloadedPathHandle const&);
    PreloadedPathHandle();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PreloadedPathHandle(::Bedrock::Resources::PreloadedPathHandle const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEach(::brstd::function_ref<void(const Core::Path&)>) const;
#else // @header-generator platform
    MCNAPI PreloadedPathHandle(
        ::Core::Path const&                                      root,
        ::std::shared_ptr<::Bedrock::Resources::Archive::Reader> backingObject
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit operator bool() const;
#else // @header-generator platform
    MCNAPI void forEach(::brstd::function_ref<void(::Core::Path const&)> callback) const;

    MCNAPI ~PreloadedPathHandle();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Resources::PreloadedPathHandle const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void*
    $ctor(::Core::Path const& root, ::std::shared_ptr<::Bedrock::Resources::Archive::Reader> backingObject);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
