#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockSource;
class CompoundTag;
class Container;
class LevelChunk;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class IVanillaMainBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockActor& getBlockActor() = 0;

    virtual ::BlockActorType getBlockActorType() const = 0;

    virtual ::Container const* getContainer() const = 0;

    virtual ::Container* getContainer() = 0;

    virtual void eraseLootTable() = 0;

    virtual std::string getName() const = 0;

    virtual std::string getImmersiveReaderText(::BlockSource&) = 0;

    virtual bool canRenderCustomName() const = 0;

    virtual bool hasCustomName() const = 0;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const = 0;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const&) = 0;

    virtual bool isCustomNameSaved() const = 0;

    virtual ::Bedrock::Safety::RedactableString getDisplayName() const = 0;

    virtual bool hasFilteredNameTag() const = 0;

    virtual std::string getFilteredNameTag() const = 0;

    virtual void setFilteredNameTag(std::string const&) = 0;

    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const = 0;

    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const = 0;

    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const = 0;

    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const = 0;

    virtual bool validateData(::CompoundTag const&) const = 0;

    virtual void fixupOnLoad(::LevelChunk&) = 0;

    virtual void setChanged() = 0;

    virtual bool isChanged() const = 0;

    virtual void onChanged(::BlockSource&) = 0;

    virtual void _setCanRenderCustomName(bool) = 0;

    virtual void _setCustomNameSaved(bool) = 0;
    // NOLINTEND
};
