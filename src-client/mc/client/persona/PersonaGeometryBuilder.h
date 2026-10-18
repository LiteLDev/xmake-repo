#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PersonaGeometryJsonCache.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class GeometryGroup;
class IPersonaPieceProvider;
class MinEngineVersion;
struct AnimatedTextureDefinition;
struct PersonaCharacter;
namespace Json { class Value; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaGeometryBuilder {
public:
    // PersonaGeometryBuilder inner types declare
    // clang-format off
    struct LastBuildSnapshot;
    // clang-format on

    // PersonaGeometryBuilder inner types define
    struct LastBuildSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, double> mDurationMs;
        ::ll::TypedStorage<8, 8, ulong>  mCacheCapacity;
        ::ll::TypedStorage<8, 8, ulong>  mCacheSize;
        ::ll::UntypedStorage<8, 24>      mStats;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryGroup>>                           mSkinGeometryGroup;
    ::ll::TypedStorage<8, 112, ::PersonaGeometryJsonCache>                              mGeometryJsonCache;
    ::ll::TypedStorage<8, 56, std::optional<PersonaGeometryBuilder::LastBuildSnapshot>> mLastBuildSnapshot;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaGeometryBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaGeometryBuilder(std::shared_ptr<GeometryGroup>);

    MCNAPI ::Json::Value getAnimations(::PersonaCharacter&);

    MCNAPI ::Json::Value getGeometryJson(::PersonaCharacter&);

    MCNAPI ~PersonaGeometryBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value getGeometryJson(
        std::string const&,
        std::unordered_map<persona::AnimatedTextureType, AnimatedTextureDefinition> const&,
        std::shared_ptr<GeometryGroup>
    );

    MCNAPI static ::MinEngineVersion const& getGeometryMinEngineVersion();

    MCNAPI static bool isPieceTypeSideValid(::SharedTypes::persona::PieceType const&, std::string const&);

    MCNAPI static bool
    readInZones(std::unordered_set<std::string>&, std::variant<std::vector<std::string>, std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<GeometryGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
