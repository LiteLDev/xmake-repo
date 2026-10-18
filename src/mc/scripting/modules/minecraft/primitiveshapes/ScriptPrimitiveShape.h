#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/scripting/modules/minecraft/ScriptRGBA.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShapeType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptDimension; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPrimitiveShape {
public:
    // ScriptPrimitiveShape inner types define
    enum class Flags : uint {
        Remove                = 1,
        New                   = 2,
        UpdateLocation        = 4,
        UpdateScale           = 8,
        UpdateRotation        = 16,
        UpdateTimeleft        = 32,
        UpdateColor           = 64,
        UpdateText            = 128,
        UpdateBoxBound        = 256,
        UpdateLineEndLocation = 512,
        UpdateArrowHeadLength = 1024,
        UpdateArrowHeadRadius = 2048,
        UpdateSegmentCount    = 4096,
        UpdateAttachedTo      = 8192,
        UpdateRenderDist      = 16384,
        UpdateCylinderData    = 32768,
        UpdatePyramidData     = 65536,
        UpdateEllipsoidData   = 131072,
        UpdateConeData        = 262144,
        SerializeAll          = 4294967294,
    };

    using FlagsStorage = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptPrimitiveShapeType> mShapeType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                 mDimension;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                   mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mRotation;
    ::ll::TypedStorage<4, 4, float>                                             mScale;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptRGBA>              mColor;
    ::ll::TypedStorage<4, 8, std::optional<float>>                              mTimeLeftSec;
    ::ll::TypedStorage<4, 8, std::optional<float>>                              mTimeLeftTotalSec;
    ::ll::TypedStorage<4, 8, std::optional<float>>                              mMaxRenderDistance;
    ::ll::UntypedStorage<8, 24>                                                 mVisibleTo;
    ::ll::TypedStorage<8, 24, std::set<NetworkIdentifierWithSubId>>             mVisibleToClients;
    ::ll::TypedStorage<8, 24, std::set<NetworkIdentifierWithSubId>>             mSentToClients;
    ::ll::TypedStorage<8, 8, ulong>                                             mNetworkId;
    ::ll::TypedStorage<4, 4, uint>                                              mFlags;
    ::ll::TypedStorage<1, 1, bool>                                              mExistsInWorld;
    ::ll::UntypedStorage<8, 40>                                                 mAttachedTo;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mAttachedToId;
    ::ll::TypedStorage<1, 1, bool>                                              mAttachedEntityWasUnloaded;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDebugShape;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                                                   mDimension;
    ::ll::TypedStorage<4, 4, ::DimensionType>                      mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mRotation;
    ::ll::TypedStorage<4, 4, float>                                mScale;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptRGBA> mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mTimeLeftSec;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mTimeLeftTotalSec;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mMaxRenderDistance;
    ::ll::
        TypedStorage<8, 24, ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
                                                                        mVisibleTo;
    ::ll::TypedStorage<8, 16, ::std::set<::NetworkIdentifierWithSubId>> mVisibleToClients;
    ::ll::TypedStorage<8, 16, ::std::set<::NetworkIdentifierWithSubId>> mSentToClients;
    ::ll::TypedStorage<8, 8, uint64>                                    mNetworkId;
    ::ll::TypedStorage<4, 4, uint>                                      mFlags;
    ::ll::TypedStorage<1, 1, bool>                                      mExistsInWorld;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                              mAttachedTo;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttachedToId;
    ::ll::TypedStorage<1, 1, bool>            mAttachedEntityWasUnloaded;
    ::ll::TypedStorage<1, 1, bool>            mIsDebugShape;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrimitiveShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrimitiveShape();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;
#else // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packet) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& packet);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool IsDebugShape() const;
#else // @header-generator platform
    MCAPI ScriptPrimitiveShape(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPrimitiveShape(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType,
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        bool
#else // @header-generator platform
    MCAPI ScriptPrimitiveShape(::ScriptModuleMinecraft::ScriptPrimitiveShapeType shapeType, bool isDebugShape);

    MCAPI ScriptPrimitiveShape(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType                               shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        bool                                                                            isDebugShape
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addToWorld();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptPrimitiveShape&
    operator=(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool existsInWorld() const;
#else // @header-generator platform
    MCAPI void setAttachedTo(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const& attachedTo
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>> const&
           getAttachedTo() const;
#else // @header-generator platform
    MCAPI void setLocation(::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getAttachedToId() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptRGBA const& getColor() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI uint getFlags() const;

    MCNAPI ::Vec3 getLocation() const;

    MCNAPI std::optional<float> getMaxRenderDistance() const;

    MCNAPI ulong getNetworkId() const;

    MCNAPI ::Vec3 const& getRotation() const;

    MCNAPI float getScale() const;

    MCNAPI std::set<NetworkIdentifierWithSubId>& getSentToClients();

    MCNAPI ::ScriptModuleMinecraft::ScriptPrimitiveShapeType getShapeType() const;

    MCNAPI std::optional<float> getTimeLeftSec() const;

    MCNAPI std::optional<float> getTotalTimeLeftSec() const;

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>> const&
           getVisibleTo() const;

    MCNAPI std::set<NetworkIdentifierWithSubId> const& getVisibleToClients() const;

    MCNAPI bool hasDuration() const;

    MCNAPI bool isDirty() const;

    MCNAPI bool isFlaggedToRemove() const;

    MCNAPI bool isNewShape() const;

    MCNAPI void markAttachedEntityReloaded();

    MCNAPI void remove();

    MCNAPI void setAttachedEntityWasUnloaded(bool);

    MCNAPI void
    setAttachedTo(std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>> const&);

    MCNAPI void setColor(::ScriptModuleMinecraft::ScriptRGBA const&);

    MCNAPI void setFlags(uint);

    MCNAPI void setLocation(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&);

    MCNAPI void setMaxRenderDistance(std::optional<float>);

    MCNAPI void setNetworkId(ulong);

    MCNAPI void setRotation(::Vec3 const&);

    MCNAPI void setScale(float);

    MCNAPI void setTotalTimeLeft(std::optional<float>);

    MCNAPI void
    setVisibleTo(std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>> const&);

    MCNAPI void tickTimeLeft(float);

    MCNAPI void unDirty();

    MCNAPI bool wasAttachedEntityUnloaded() const;
#else // @header-generator platform
    MCAPI void setVisibleTo(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> const& visibleTo
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType,
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPrimitiveShapeType shapeType, bool isDebugShape);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType                               shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        bool                                                                            isDebugShape
#endif // @header-generator platform
    );
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
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload&) const;
#else // @header-generator platform
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packet) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& packet);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
