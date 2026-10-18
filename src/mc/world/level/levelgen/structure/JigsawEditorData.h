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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mName;
    ::ll::TypedStorage<8, 24, std::string>                   mTarget;
    ::ll::TypedStorage<8, 24, std::string>                   mTargetPool;
    ::ll::TypedStorage<8, 24, std::string>                   mFinalBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTargetPool;
    ::ll::TypedStorage<8, 32, ::std::string>                 mFinalBlock;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<1, 1, bool>                           mJointTypeVisible;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    JigsawEditorData& operator=(JigsawEditorData const&);
#else // @header-generator platform
    JigsawEditorData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawEditorData();
#else // @header-generator platform
    MCAPI JigsawEditorData(::JigsawEditorData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawEditorData(::JigsawEditorData const&);

    MCNAPI JigsawEditorData(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::SharedTypes::JigsawJointType,
        int,
        int
#else // @header-generator platform
    MCAPI JigsawEditorData(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getFinalBlock() const;
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::JigsawJointType const& getJointType() const;
#else // @header-generator platform
    MCAPI ::JigsawEditorData& operator=(::JigsawEditorData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getJointTypeVisible() const;
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~JigsawEditorData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<int, std::string> const& JOINT_TYPE_TO_NAME();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<int, ::std::string> const& JOINT_TYPE_TO_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::JigsawEditorData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::JigsawEditorData const&);

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::SharedTypes::JigsawJointType,
        int,
        int
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&           name,
        ::std::string const&           target,
        ::std::string const&           targetPool,
        ::std::string const&           finalBlockName,
        ::SharedTypes::JigsawJointType jointType,
        int                            placement,
        int                            selection
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
