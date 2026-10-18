#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RendererDebugLayerOutputManager : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RendererDebugLayerOutputManager : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class RendererDebugLayerOutputManager {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RendererDebugLayerOutputManager inner types declare
    // clang-format off
    struct ErrorState;
    // clang-format on

    // RendererDebugLayerOutputManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ErrorState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mErrorCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RendererDebugLayerOutputManager::ErrorState> mCurrentErrorState;
    ::ll::TypedStorage<8, 48, std::deque<std::string>>                           mOutput;
    ::ll::TypedStorage<2, 2, ushort const>                                       mMaxErrorCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererDebugLayerOutputManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void debugMessageCallback(char const*);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ErrorState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf99ad1;
        // NOLINTEND

    public:
        // prevent constructor by default
        ErrorState& operator=(ErrorState const&);
        ErrorState(ErrorState const&);
        ErrorState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke4a53e;
    ::ll::UntypedStorage<8, 40> mUnk5871d7;
    ::ll::UntypedStorage<2, 2>  mUnkc57680;
    // NOLINTEND

public:
    // prevent constructor by default
    RendererDebugLayerOutputManager& operator=(RendererDebugLayerOutputManager const&);
    RendererDebugLayerOutputManager(RendererDebugLayerOutputManager const&);
    RendererDebugLayerOutputManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererDebugLayerOutputManager() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ErrorState {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace mce
