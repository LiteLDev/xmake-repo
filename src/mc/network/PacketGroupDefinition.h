#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/IPacketLimitAlgorithm.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class IPacketLimitAlgorithm;
// clang-format on

class PacketGroupDefinition {
public:
    // PacketGroupDefinition inner types declare
    // clang-format off
    struct PacketGroupBuilder;
    // clang-format on

    // PacketGroupDefinition inner types define
    struct PacketGroupBuilder {
    public:
        // PacketGroupBuilder inner types declare
        // clang-format off
        struct AlgorithmEntry;
        // clang-format on

        // PacketGroupBuilder inner types define
        struct AlgorithmEntry {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::vector<MinecraftPacketIds>>       packetIds;
            ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketLimitAlgorithm>> algorithm;
#else // @header-generator platform
            ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftPacketIds>>       packetIds;
            ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> algorithm;
#endif // @header-generator platform
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<MinecraftPacketIds, std::vector<std::unique_ptr<IPacketLimitAlgorithm>>>> mBasicPacketGroups;
        ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketLimitAlgorithm>> mDefaultAlgorithm;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::MinecraftPacketIds, ::std::vector<::std::unique_ptr<::IPacketLimitAlgorithm>>>>
                                                                             mBasicPacketGroups;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> mDefaultAlgorithm;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        PacketGroupBuilder& operator=(PacketGroupBuilder const&);
        PacketGroupBuilder(PacketGroupBuilder const&);
#else // @header-generator platform
        PacketGroupBuilder(PacketGroupBuilder&& other) noexcept {
            mBasicPacketGroups = std::move(other.mBasicPacketGroups);
            mDefaultAlgorithm  = std::move(other.mDefaultAlgorithm);
        }
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void addPacketAlgorithm(std::vector<MinecraftPacketIds> const&, std::unique_ptr<IPacketLimitAlgorithm>);

        MCNAPI void addPacketAlgorithm(::MinecraftPacketIds, std::unique_ptr<IPacketLimitAlgorithm>);

        MCNAPI std::unique_ptr<PacketGroupDefinition> createGroupDefinition() const;

        MCNAPI void setDefaultAlgorithm(std::unique_ptr<IPacketLimitAlgorithm>);

        MCNAPI ~PacketGroupBuilder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void addPacketAlgorithm(
            ::std::vector<::MinecraftPacketIds> const& packetIds,
            ::std::unique_ptr<::IPacketLimitAlgorithm> algorithm
        );
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<MinecraftPacketIds, std::unique_ptr<IPacketLimitAlgorithm>>> mPacketGroups;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketLimitAlgorithm>> mDefaultAlgorithm;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PacketGroupDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::MinecraftPacketIds, ::std::unique_ptr<::IPacketLimitAlgorithm>>>
                                                                         mPacketGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> mDefaultAlgorithm;
#endif // @header-generator platform
    // NOLINTEND
};
