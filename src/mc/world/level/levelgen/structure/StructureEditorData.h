#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StructureEditorData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mStructureName;
    ::ll::TypedStorage<8, 24, std::string>                         mDataField;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mStructureName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDataField;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mIncludePlayers;
    ::ll::TypedStorage<1, 1, bool>                                 mShowBoundingBox;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode>          mRedstoneSaveMode;
    ::ll::TypedStorage<4, 4, ::StructureBlockType>                 mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::StructureSettings>                 mSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::StructureSettings>                mSettings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);
    StructureEditorData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AnimationMode getAnimationMode() const;
#else // @header-generator platform
    MCAPI StructureEditorData(::StructureEditorData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getAnimationModeAsString() const;
#else // @header-generator platform
    MCAPI StructureEditorData(::StructureEditorData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAnimationSeconds() const;
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIgnoreBlocks() const;
#else // @header-generator platform
    MCAPI ::StructureEditorData& operator=(::StructureEditorData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIgnoreEntities() const;
#else // @header-generator platform
    MCAPI bool operator==(::StructureEditorData const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIncludePlayers() const;
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getIntegritySeed() const;
#else // @header-generator platform
    MCAPI void setFilteredStructureName(::std::string const& filteredName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getIntegrityValue() const;

    MCNAPI bool getIsWaterLogged() const;

    MCNAPI ::Mirror getMirror() const;

    MCNAPI ::Vec3 const& getPivot() const;

    MCNAPI ::StructureRedstoneSaveMode getRedstoneSaveMode() const;

    MCNAPI ::Rotation getRotation() const;

    MCNAPI bool getShowBoundingBox() const;

    MCNAPI ::StructureBlockType getStructureBlockType() const;

    MCNAPI std::string const& getStructureDataField() const;

    MCNAPI ::BlockPos const& getStructureOffset() const;

    MCNAPI ::StructureSettings const& getStructureSettings() const;

    MCNAPI ::BlockPos const& getStructureSize() const;

    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool operator==(::StructureEditorData const&) const;

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);

    MCNAPI void setAnimationMode(::AnimationMode);

    MCNAPI void setAnimationSeconds(float);

    MCNAPI void setAnimationTicks(uint);

    MCNAPI void setFilteredStructureName(std::string const&);

    MCNAPI void setIgnoreBlocks(bool);

    MCNAPI void setIgnoreEntities(bool);

    MCNAPI void setIncludePlayers(bool);

    MCNAPI void setIntegritySeed(uint);

    MCNAPI void setIntegrityValue(float);

    MCNAPI void setIsWaterLogged(bool);

    MCNAPI void setLastTouchedByPlayerID(::ActorUniqueID);

    MCNAPI void setMirror(::Mirror);

    MCNAPI void setRedstoneSaveMode(::StructureRedstoneSaveMode);

    MCNAPI void setRotation(::Rotation);

    MCNAPI void setShowBoundingBox(bool);

    MCNAPI void setStructureBlockType(::StructureBlockType);

    MCNAPI void setStructureDataField(std::string const&);

    MCNAPI void setStructureName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void setStructureOffset(::BlockPos const&);

    MCNAPI void setStructureSize(::BlockPos const&);

    MCNAPI void validateOffset(::BlockPos const&, short, short);

    MCNAPI void validateSize(::BlockPos const&, short, short);

    MCNAPI ~StructureEditorData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockPos getOrientedBounds(::BlockPos const&, ::Rotation);
#else // @header-generator platform
    MCAPI ~StructureEditorData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_EXPORT_NAME();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& DEFAULT_EXPORT_NAME();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_STRUCTURE_NAMESPACE();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_STRUCTURE_NAMESPACE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::StructureBlockType const& DEFAULT_STRUCTURE_TYPE();
#else // @header-generator platform
    MCAPI static ::std::string const& NAME_PREFIX();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& MAX_STRUCTURE_OFFSET();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureEditorData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& MIN_STRUCTURE_OFFSET();

    MCNAPI static ::BlockPos const& MIN_STRUCTURE_SIZE();

    MCNAPI static char const& NAMESPACE_DELIMITER();

    MCNAPI static std::string const& NAME_PREFIX();
#else // @header-generator platform
    MCAPI void* $ctor(::StructureEditorData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
