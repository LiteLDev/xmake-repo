#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class JigsawBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::JigsawEditorData> mCurrData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;

    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JigsawBlockActor(::BlockPos const&);

    MCNAPI ::JigsawEditorData const& getJigsawData() const;

    MCNAPI void setJigsawData(::JigsawEditorData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;

    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
