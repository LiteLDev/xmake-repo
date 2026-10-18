#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameConfiguration.h"
#include "mc/deps/minecraft_renderer/framebuilder/mcr/FrameContext.h"
#include "mc/deps/minecraft_renderer/resources/mcr/DeferredResourceTransactions.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct FrameDiscardContext; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameBuilderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mcr::DeferredResourceTransactions>      deferredResourceTransactions;
    ::ll::TypedStorage<1, 1, ::mcr::FrameContext>                       frameContext;
    ::ll::TypedStorage<8, 64, ::mce::framebuilder::FrameConfiguration>  configuration;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::FrameDiscardContext>> discardContext;
    ::ll::UntypedStorage<8, 24>                                         pbrTextureDataManager;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FrameBuilderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkfd8cea;
    ::ll::UntypedStorage<1, 1>  mUnk332f9b;
    ::ll::UntypedStorage<8, 64> mUnkedf3c4;
    ::ll::UntypedStorage<8, 8>  mUnkd56423;
    ::ll::UntypedStorage<8, 24> mUnk74fea9;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBuilderContext& operator=(FrameBuilderContext const&);
    FrameBuilderContext(FrameBuilderContext const&);
    FrameBuilderContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameBuilderContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class FrameBuilderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce::framebuilder
