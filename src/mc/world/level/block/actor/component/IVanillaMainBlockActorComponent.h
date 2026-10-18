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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::Container* getContainer() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::Container const* getContainer() const = 0;
#endif // @header-generator platform

    virtual void eraseLootTable() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const = 0;
#else // @header-generator platform
    virtual ::std::string getName() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getImmersiveReaderText(::BlockSource&) = 0;
#else // @header-generator platform
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) = 0;
#endif // @header-generator platform

    virtual bool canRenderCustomName() const = 0;

    virtual bool hasCustomName() const = 0;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const&) = 0;
#else // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name) = 0;
#endif // @header-generator platform

    virtual bool isCustomNameSaved() const = 0;

    virtual ::Bedrock::Safety::RedactableString getDisplayName() const = 0;

    virtual bool hasFilteredNameTag() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFilteredNameTag() const = 0;
#else // @header-generator platform
    virtual ::std::string getFilteredNameTag() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFilteredNameTag(std::string const&) = 0;
#else // @header-generator platform
    virtual void setFilteredNameTag(::std::string const& filteredName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const = 0;
#else // @header-generator platform
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const = 0;
#else // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validateData(::CompoundTag const&) const = 0;
#else // @header-generator platform
    virtual bool validateData(::CompoundTag const& tag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk& lc) = 0;
#endif // @header-generator platform

    virtual void setChanged() = 0;

    virtual bool isChanged() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChanged(::BlockSource&) = 0;
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _setCanRenderCustomName(bool) = 0;
#else // @header-generator platform
    virtual void _setCanRenderCustomName(bool value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _setCustomNameSaved(bool) = 0;
#else // @header-generator platform
    virtual void _setCustomNameSaved(bool saveCustomName) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
