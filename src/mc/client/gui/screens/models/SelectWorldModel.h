#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace Realms { class WorldCache; }
namespace Realms { struct World; }
namespace World { class LocalWorldList; }
// clang-format on

class SelectWorldModel {
public:
    // SelectWorldModel inner types define
    using RealmsWorldList = std::vector<std::reference_wrapper<Realms::World>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<World::LocalWorldList>>             mWorldList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::WorldCache>>                mRealmsCache;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<Realms::World>>> mRealmsWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectWorldModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SelectWorldModel(std::shared_ptr<World::LocalWorldList>, std::shared_ptr<Realms::WorldCache>);

    MCNAPI void getCachedRealmsWorlds(std::function<bool(const Realms::World&, Realms::PlayerRoleActions)>);

    MCNAPI int getLocalWorldCount() const;

    MCNAPI ::optional_ref<const LevelSummary> getLocalWorldInfo(int) const;

    MCNAPI int getRealmsWorldCount() const;

    MCNAPI ::optional_ref<const Realms::World> getRealmsWorldInfo(int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<World::LocalWorldList>, std::shared_ptr<Realms::WorldCache>);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class WorldCache; }
namespace Realms { struct World; }
namespace World { class LocalWorldList; }
// clang-format on

class SelectWorldModel {
public:
    // SelectWorldModel inner types define
    using RealmsWorldList = ::std::vector<::std::reference_wrapper<::Realms::World>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>               mWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::WorldCache>>                  mRealmsCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Realms::World>>> mRealmsWorlds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getCachedRealmsWorlds(
        ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)> canUserDoRealmAction
    );
    // NOLINTEND
};
#else // @header-generator platform
class SelectWorldModel {};
#endif // @header-generator platform
#endif // @header-generator platform
