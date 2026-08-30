#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

class AvailableCommandsPacketPayload {
public:
    // AvailableCommandsPacketPayload inner types declare
    // clang-format off
    struct EnumData;
    struct ChainedSubcommandRelationship;
    struct ChainedSubcommandData;
    struct ParamData;
    struct OverloadData;
    struct CommandData;
    struct SoftEnumData;
    struct ConstrainedValueData;
    // clang-format on

    // AvailableCommandsPacketPayload inner types define
    struct EnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>       name;
        ::ll::TypedStorage<8, 24, std::vector<uint>> values;
        // NOLINTEND
    };

    struct ChainedSubcommandRelationship {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> subCommandFirstValue;
        ::ll::TypedStorage<4, 4, uint> subCommandSecondValue;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::ChainedSubcommandRelationship const&) const;
        // NOLINTEND
    };

    struct ChainedSubcommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                                name;
        ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ChainedSubcommandRelationship>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::ChainedSubcommandData const&) const;
        // NOLINTEND
    };

    struct ParamData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<4, 4, uint>         parseSymbol;
        ::ll::TypedStorage<1, 1, bool>         optional;
        ::ll::TypedStorage<1, 1, uchar>        paramOptions;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::ParamData const&) const;
        // NOLINTEND
    };

    struct OverloadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ParamData>> params;
        ::ll::TypedStorage<1, 1, bool>                                                    isChaining;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::AvailableCommandsPacketPayload::OverloadData&
        operator=(::AvailableCommandsPacketPayload::OverloadData const&);

        MCNAPI bool operator==(::AvailableCommandsPacketPayload::OverloadData const&) const;
        // NOLINTEND
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                               name;
        ::ll::TypedStorage<8, 24, std::string>                                               description;
        ::ll::TypedStorage<2, 2, ushort>                                                     flags;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                   permission;
        ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::OverloadData>> overloads;
        ::ll::TypedStorage<8, 24, std::vector<uint>>                                         chainedSubcommandIndexes;
        ::ll::TypedStorage<4, 4, int>                                                        aliasEnum;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CommandData(::AvailableCommandsPacketPayload::CommandData const&);

        MCNAPI ::AvailableCommandsPacketPayload::CommandData&
        operator=(::AvailableCommandsPacketPayload::CommandData&&);

        MCNAPI bool operator==(::AvailableCommandsPacketPayload::CommandData const&) const;

        MCNAPI ~CommandData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AvailableCommandsPacketPayload::CommandData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SoftEnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              name;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::SoftEnumData const&) const;

        MCNAPI ~SoftEnumData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ConstrainedValueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                enumValueSymbol;
        ::ll::TypedStorage<4, 4, uint>                enumSymbol;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> constraints;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mEnumValues;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mPostfixes;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::EnumData>> mEnums;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>> mChainedSubcommands;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::CommandData>>           mCommands;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::SoftEnumData>>          mSoftEnums;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>>  mConstraints;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AvailableCommandsPacketPayload(::AvailableCommandsPacketPayload const&);

    MCNAPI AvailableCommandsPacketPayload(
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<AvailableCommandsPacketPayload::EnumData>&&,
        std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>&&,
        std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>&&,
        std::vector<AvailableCommandsPacketPayload::CommandData>&&,
        std::vector<AvailableCommandsPacketPayload::SoftEnumData>&&
    );

    MCNAPI std::vector<std::string> const& getChainedSubcommandValues() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData> const& getChainedSubcommands() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::CommandData> const& getCommands() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::ConstrainedValueData> const& getConstraints() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::EnumData> const& getEnums() const;

    MCNAPI std::vector<std::string> const& getPostfixes() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::SoftEnumData> const& getSoftEnums() const;

    MCNAPI ::AvailableCommandsPacketPayload& operator=(::AvailableCommandsPacketPayload const&);

    MCNAPI ~AvailableCommandsPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AvailableCommandsPacketPayload const&);

    MCNAPI void* $ctor(
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<AvailableCommandsPacketPayload::EnumData>&&,
        std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>&&,
        std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>&&,
        std::vector<AvailableCommandsPacketPayload::CommandData>&&,
        std::vector<AvailableCommandsPacketPayload::SoftEnumData>&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
