#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenV2ResetPoint.h"
#include "mc/ddrv2__PoolHandle.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
class DataDrivenRenderer;
class DataDrivenRendererRegistry;
class GameVersion;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererContinuousData;
struct DataDrivenRendererPool;
struct DataDrivenRendererPreprocessingContext;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenV2ResetPoint.h"
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
class DataDrivenRenderer;
class DataDrivenRendererRegistry;
class GameVersion;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererContinuousData;
struct DataDrivenRendererPool;
struct DataDrivenRendererPreprocessingContext;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class DataDrivenRendererV2RequiredData {
public:
    // DataDrivenRendererV2RequiredData inner types declare
    // clang-format off
    struct LateRenderer;
    // clang-format on

    // DataDrivenRendererV2RequiredData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct LateRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                    name;
        ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenRenderer>> renderer;
        ::ll::TypedStorage<8, 8, ::ActorRenderer const*>             rendererKey;
        // NOLINTEND

    public:
        // prevent constructor by default
        LateRenderer& operator=(LateRenderer const&);
        LateRenderer(LateRenderer const&);
        LateRenderer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LateRenderer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<DataDrivenRendererRegistry>>       mProcessedData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DataDrivenRendererContinuousData>> mContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                              mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                              mActorsWithAttachablesEnabledAndPlayers;
    ::ll::UntypedStorage<8, 8>                                                  mBaseDataDrivenPool;
    ::ll::TypedStorage<4, 4, uint>                                              mDisabledRenderersBeforeRebuild;
    ::ll::TypedStorage<4, 4, uint>                                              mCurrentDisabledRendererCount;
    ::ll::TypedStorage<8, 208, ::DataDrivenV2ResetPoint>                        mResetPoint;
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRendererV2RequiredData::LateRenderer>> mLateRenderers;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2RequiredData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRendererV2RequiredData(
        std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>> const&,
        ::MinecraftGameplayGraphicsResources&,
        ::GameVersion const&
    );

    MCNAPI bool forceReinitialize(
        std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>> const&,
        ::MinecraftGameplayGraphicsResources&,
        ::GameVersion const&
    );

    MCNAPI ::DataDrivenRendererContinuousData* getDataDrivenRendererContinuousData() const;

    MCNAPI ::DataDrivenRendererRegistry const* getDataDrivenRendererRegistry() const;

    MCNAPI void rebuildLateRenderers(::MinecraftGameplayGraphicsResources&);

    MCNAPI bool removeRenderer(std::shared_ptr<DataDrivenRenderer> const&);

    MCNAPI bool renderActorsWithAttachablesEquipped() const;

    MCNAPI bool shouldRebuild() const;

    MCNAPI bool tryLateAddRenderer(
        ::HashedString const&,
        std::shared_ptr<DataDrivenRenderer> const&,
        ::MinecraftGameplayGraphicsResources&
    );

    MCNAPI ~DataDrivenRendererV2RequiredData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _tryAddRenderer(
        ::HashedString const&,
        std::shared_ptr<DataDrivenRenderer> const&,
        ::DataDrivenRendererPreprocessingContext&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>> const&,
        ::MinecraftGameplayGraphicsResources&,
        ::GameVersion const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LateRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                        name;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> renderer;
        ::ll::TypedStorage<8, 8, ::ActorRenderer const*>                 rendererKey;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererRegistry>>       mProcessedData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererContinuousData>> mContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                          mActorsWithAttachablesEnabledAndPlayers;
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::DataDrivenRendererPool>> mBaseDataDrivenPool;
    ::ll::TypedStorage<4, 4, uint>                                          mDisabledRenderersBeforeRebuild;
    ::ll::TypedStorage<4, 4, uint>                                          mCurrentDisabledRendererCount;
    ::ll::TypedStorage<8, 208, ::DataDrivenV2ResetPoint>                    mResetPoint;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererV2RequiredData::LateRenderer>> mLateRenderers;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2RequiredData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRendererV2RequiredData(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCAPI bool forceReinitialize(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCAPI void rebuildLateRenderers(::MinecraftGameplayGraphicsResources& graphicsResources);

    MCAPI bool removeRenderer(::std::shared_ptr<::DataDrivenRenderer> const& renderer);

    MCAPI bool tryLateAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _tryAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::DataDrivenRendererPreprocessingContext&      ctx,
        bool                                           supportPlayers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );
    // NOLINTEND
#else // @header-generator platform
    struct LateRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
};
