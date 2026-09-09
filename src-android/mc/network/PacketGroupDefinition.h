#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
            ::ll::TypedStorage<8, 24, std::vector<MinecraftPacketIds>>       packetIds;
            ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketLimitAlgorithm>> algorithm;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<MinecraftPacketIds, std::vector<std::unique_ptr<IPacketLimitAlgorithm>>>> mBasicPacketGroups;
        ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketLimitAlgorithm>> mDefaultAlgorithm;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketGroupBuilder& operator=(PacketGroupBuilder const&);
        PacketGroupBuilder(PacketGroupBuilder const&);

    public:
        // member functions
        // NOLINTBEGIN
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
