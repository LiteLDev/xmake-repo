#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenRendererEntry.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
struct DataDrivenRendererEntry;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct RequestedRenderEntries {
public:
    // RequestedRenderEntries inner types declare
    // clang-format off
    struct ActorRelatedData;
    // clang-format on

    // RequestedRenderEntries inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ActorRelatedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ShadowContext> mShadowContext;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRendererEntry>>                  mDataDrivenRenders;
    ::ll::TypedStorage<8, 24, std::vector<Actor*>>                                   mActorsToRender;
    ::ll::TypedStorage<8, 24, std::vector<RenderParams*>>                            mRenderParams;
    ::ll::TypedStorage<8, 24, std::vector<RequestedRenderEntries::ActorRelatedData>> mActorRenderData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RequestedRenderEntries();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ActorRelatedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ShadowContext> mShadowContext;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererEntry>>                  mDataDrivenRenders;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                                   mActorsToRender;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderParams*>>                            mRenderParams;
    ::ll::TypedStorage<8, 24, ::std::vector<::RequestedRenderEntries::ActorRelatedData>> mActorRenderData;
    // NOLINTEND
#else // @header-generator platform
    struct ActorRelatedData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
