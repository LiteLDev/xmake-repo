#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class Vec3;
struct ActorUniqueID;
// clang-format on

class StructureEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mStructureName;
    ::ll::TypedStorage<8, 24, std::string>                         mDataField;
    ::ll::TypedStorage<1, 1, bool>                                 mIncludePlayers;
    ::ll::TypedStorage<1, 1, bool>                                 mShowBoundingBox;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode>          mRedstoneSaveMode;
    ::ll::TypedStorage<4, 4, ::StructureBlockType>                 mType;
    ::ll::TypedStorage<8, 96, ::StructureSettings>                 mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AnimationMode getAnimationMode() const;

    MCNAPI std::string getAnimationModeAsString() const;

    MCNAPI float getAnimationSeconds() const;

    MCNAPI bool getIgnoreBlocks() const;

    MCNAPI bool getIgnoreEntities() const;

    MCNAPI bool getIncludePlayers() const;

    MCNAPI uint getIntegritySeed() const;

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DEFAULT_EXPORT_NAME();

    MCNAPI static std::string const& DEFAULT_STRUCTURE_NAMESPACE();

    MCNAPI static ::StructureBlockType const& DEFAULT_STRUCTURE_TYPE();

    MCNAPI static ::BlockPos const& MAX_STRUCTURE_OFFSET();

    MCNAPI static ::BlockPos const& MIN_STRUCTURE_OFFSET();

    MCNAPI static ::BlockPos const& MIN_STRUCTURE_SIZE();

    MCNAPI static char const& NAMESPACE_DELIMITER();

    MCNAPI static std::string const& NAME_PREFIX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
