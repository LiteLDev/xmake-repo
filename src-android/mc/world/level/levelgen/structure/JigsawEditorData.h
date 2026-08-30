#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class JigsawEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mName;
    ::ll::TypedStorage<8, 24, std::string>                   mTarget;
    ::ll::TypedStorage<8, 24, std::string>                   mTargetPool;
    ::ll::TypedStorage<8, 24, std::string>                   mFinalBlock;
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<1, 1, bool>                           mJointTypeVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorData& operator=(JigsawEditorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawEditorData();

    MCNAPI JigsawEditorData(::JigsawEditorData const&);

    MCNAPI JigsawEditorData(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::SharedTypes::JigsawJointType,
        int,
        int
    );

    MCNAPI std::string const& getFinalBlock() const;

    MCNAPI ::SharedTypes::JigsawJointType const& getJointType() const;

    MCNAPI bool getJointTypeVisible() const;

    MCNAPI int getPlacementPriority() const;

    MCNAPI int getSelectionPriority() const;

    MCNAPI std::string const& getTarget() const;

    MCNAPI std::string const& getTargetPool() const;

    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void setFinalBlock(std::string const&);

    MCNAPI void setJointType(::SharedTypes::JigsawJointType const&);

    MCNAPI void setJointTypeFromName(std::string const&);

    MCNAPI void setJointTypeVisible(bool);

    MCNAPI void setName(std::string const&);

    MCNAPI void setPlacementPriority(int);

    MCNAPI void setSelectionPriority(int);

    MCNAPI void setTarget(std::string const&);

    MCNAPI void setTargetPool(std::string const&);

    MCNAPI ~JigsawEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<int, std::string> const& JOINT_TYPE_TO_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JigsawEditorData const&);

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::SharedTypes::JigsawJointType,
        int,
        int
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
