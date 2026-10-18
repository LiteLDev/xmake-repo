#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/container/EnumSet.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class DynamicPropertiesBlockActorComponent;
class ILevel;
class IVanillaMainBlockActorComponent;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
class LevelChunk;
class Player;
class RandomizableContainerBlockActorComponent;
class SaveContext;
// clang-format on

class BlockActor {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mPosition;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                                    mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DynamicPropertiesBlockActorComponent>>     mDynamicProperties;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RandomizableContainerBlockActorComponent>> mRandomizableContainer;
    // NOLINTEND
#else // @header-generator platform
    // BlockActor inner types define
    enum class Property : uchar {
        Changed             = 0,
        Movable             = 1,
        ClientSideOnly      = 2,
        SaveCustomName      = 3,
        CanRenderCustomName = 4,
        Count               = 5,
    };

    using MapIdType = ::std::unordered_map<::std::string, ::BlockActorType>;

    using MapTypeId = ::std::unordered_map<::BlockActorType, ::std::string>;

    using Properties = Bedrock::EnumSet<::BlockActor::Property, 5>;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockActor();
#else // @header-generator platform
    LLAPI void refresh(optional_ref<class BlockSource> blockSource = std::nullopt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt, class BlockPos const& pos);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                   mPosition;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                                        mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DynamicPropertiesBlockActorComponent>>     mDynamicProperties;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RandomizableContainerBlockActorComponent>> mRandomizableContainer;
    // NOLINTEND
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActor();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    virtual bool saveItemInstanceData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;
#else // @header-generator platform
    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource& region);
#endif // @header-generator platform

    virtual void loadStatic();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region);
#endif // @header-generator platform

    virtual void onMove();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkLoaded(::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkLoaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkUnloaded(::LevelChunk& lc);
#endif // @header-generator platform

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void triggerEvent(int, int);
#else // @header-generator platform
    virtual void triggerEvent(int b0, int b1);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _playerCanUpdate(::Player const&) const;

    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool _playerCanUpdate(::Player const& player) const;
#else // LL_PLAT_C
    virtual bool _playerCanUpdate(::Player const& fromPlayer) const;
#endif
#endif // @header-generator platform

    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();
#endif // @header-generator platform

    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();
#else // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();
#endif // @header-generator platform

    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockActor(::BlockActorType, ::BlockPos const&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> getClientUpdatePacket(::BlockSource&);

    MCNAPI ::BlockPos const& getPosition() const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> getServerUpdatePacket(::BlockSource&);

    MCNAPI ::BlockActorType getType() const;

    MCNAPI bool isType(::BlockActorType) const;

    MCNAPI bool onUpdatePacket(::CompoundTag const&, ::BlockSource&, ::Player const*);

    MCNAPI bool playerCanUpdate(::Player const*) const;

    MCNAPI void setPosition(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockActor* _getBlockActor(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::BlockActor* _getBlockActor(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos getPosition(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI static bool isType(::BlockActor&, ::BlockActorType);

    MCNAPI static std::shared_ptr<BlockActor>
    loadStatic(::BlockType const&, ::BlockPos const&, ::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::BlockActor> loadStatic(
        ::BlockType const&   block,
        ::BlockPos const&    pos,
        ::ILevel&            level,
        ::CompoundTag const& tag,
        ::DataLoadHelper&    dataLoadHelper
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& KEY_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::std::string const& KEY_VERSION();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI bool $saveItemInstanceData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $saveBlockData(::CompoundTag&, ::BlockSource&) const;
#else // @header-generator platform
    MCFOLD void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);
#else // @header-generator platform
    MCFOLD void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onCustomTagLoadDone(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadStatic();
#else // @header-generator platform
    MCFOLD void $loadStatic();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove();
#else // @header-generator platform
    MCFOLD void $onMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkLoaded(::LevelChunk&);
#else // @header-generator platform
    MCFOLD void $onChunkLoaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSubChunkLoaded(::LevelChunk&, short, bool);
#else // @header-generator platform
    MCFOLD void $onSubChunkLoaded(::LevelChunk&, short, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $triggerEvent(int, int);
#else // @header-generator platform
    MCFOLD void $triggerEvent(int b0, int b1);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    MCAPI bool $isTypeOrDerived(::BlockActorType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_playerCanUpdate(::Player const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $_playerCanUpdate(::Player const& player) const;
#else // LL_PLAT_C
    MCFOLD bool $_playerCanUpdate(::Player const& fromPlayer) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent* $_getRenderComponent();
#else // @header-generator platform
    MCFOLD ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;
#else // @header-generator platform
    MCFOLD ::IVanillaRenderBlockActorComponent* $_getRenderComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaTickBlockActorComponent* $_getTickComponent();
#else // @header-generator platform
    MCFOLD ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;
#else // @header-generator platform
    MCFOLD ::IVanillaTickBlockActorComponent* $_getTickComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaMainBlockActorComponent* $_getMainComponent();
#else // @header-generator platform
    MCFOLD ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;
#else // @header-generator platform
    MCFOLD ::IVanillaMainBlockActorComponent* $_getMainComponent();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
