#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

class AvailableCommandsPacketPayload {
public:
    // AvailableCommandsPacketPayload inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct EnumData;
#else // @header-generator platform
#endif // @header-generator platform
    struct ChainedSubcommandRelationship;
    struct ChainedSubcommandData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ConstrainedValueData;
    struct EnumData;
#endif // @header-generator platform
    struct ParamData;
    struct OverloadData;
    struct CommandData;
    struct SoftEnumData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ConstrainedValueData;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // AvailableCommandsPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct EnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>       name;
        ::ll::TypedStorage<8, 24, std::vector<uint>> values;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct ChainedSubcommandRelationship {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> subCommandFirstValue;
        ::ll::TypedStorage<4, 4, uint> subCommandSecondValue;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::ChainedSubcommandRelationship const&) const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct ChainedSubcommandData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                                                name;
        ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ChainedSubcommandRelationship>> values;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandRelationship>>
            values;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ChainedSubcommandData& operator=(ChainedSubcommandData const&);
        ChainedSubcommandData();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::AvailableCommandsPacketPayload::ChainedSubcommandData const&) const;
        // NOLINTEND
    };
#else // @header-generator platform
        MCAPI ChainedSubcommandData(::AvailableCommandsPacketPayload::ChainedSubcommandData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCFOLD ::AvailableCommandsPacketPayload::ChainedSubcommandData&
        operator=(::AvailableCommandsPacketPayload::ChainedSubcommandData&&);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCFOLD void* $ctor(::AvailableCommandsPacketPayload::ChainedSubcommandData const&);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ConstrainedValueData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>                enumValueSymbol;
        ::ll::TypedStorage<4, 4, uint>                enumSymbol;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> constraints;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>                  enumValueSymbol;
        ::ll::TypedStorage<4, 4, uint>                  enumSymbol;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> constraints;
        // NOLINTEND
    };

    struct EnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>       name;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> values;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumData& operator=(EnumData const&);
        EnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EnumData(::AvailableCommandsPacketPayload::EnumData const&);

        MCFOLD ::AvailableCommandsPacketPayload::EnumData& operator=(::AvailableCommandsPacketPayload::EnumData&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::AvailableCommandsPacketPayload::EnumData const&);
        // NOLINTEND
    };

    struct ParamData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<4, 4, uint>           parseSymbol;
        ::ll::TypedStorage<1, 1, bool>           optional;
        ::ll::TypedStorage<1, 1, uchar>          paramOptions;
        // NOLINTEND
    };

    struct OverloadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ParamData>> params;
        ::ll::TypedStorage<1, 1, bool>                                                        isChaining;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::AvailableCommandsPacketPayload::OverloadData const& other) const;
        // NOLINTEND
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                 name;
        ::ll::TypedStorage<8, 32, ::std::string>                                                 description;
        ::ll::TypedStorage<2, 2, ushort>                                                         flags;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                       permission;
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::OverloadData>> overloads;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> chainedSubcommandIndexes;
        ::ll::TypedStorage<4, 4, int>                  aliasEnum;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CommandData(::AvailableCommandsPacketPayload::CommandData const&);

        MCAPI ::AvailableCommandsPacketPayload::CommandData& operator=(::AvailableCommandsPacketPayload::CommandData&&);

        MCAPI ::AvailableCommandsPacketPayload::CommandData&
        operator=(::AvailableCommandsPacketPayload::CommandData const&);

        MCAPI bool operator==(::AvailableCommandsPacketPayload::CommandData const& other) const;

        MCAPI ~CommandData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacketPayload::CommandData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SoftEnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                name;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD bool operator==(::AvailableCommandsPacketPayload::SoftEnumData const& other) const;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mEnumValues;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mPostfixes;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::EnumData>> mEnums;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>> mChainedSubcommands;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::CommandData>>           mCommands;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::SoftEnumData>>          mSoftEnums;
    ::ll::TypedStorage<8, 24, std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>>  mConstraints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mPostfixes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::EnumData>> mEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>>
                                                                                             mChainedSubcommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::CommandData>>  mCommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>> mSoftEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>> mConstraints;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AvailableCommandsPacketPayload& operator=(AvailableCommandsPacketPayload const&);
    AvailableCommandsPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AvailableCommandsPacketPayload(::AvailableCommandsPacketPayload const&);
#else // @header-generator platform
    MCAPI AvailableCommandsPacketPayload(::AvailableCommandsPacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AvailableCommandsPacketPayload(
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<AvailableCommandsPacketPayload::EnumData>&&,
        std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>&&,
        std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>&&,
        std::vector<AvailableCommandsPacketPayload::CommandData>&&,
        std::vector<AvailableCommandsPacketPayload::SoftEnumData>&&
#else // @header-generator platform
    MCAPI AvailableCommandsPacketPayload(
        ::std::vector<::std::string> const&                                      enumValues,
        ::std::vector<::std::string> const&                                      chainedSubcommandValues,
        ::std::vector<::std::string> const&                                      postfixes,
        ::std::vector<::AvailableCommandsPacketPayload::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacketPayload::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>&&          softEnumData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const& getChainedSubcommandValues() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData> const& getChainedSubcommands() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::CommandData> const& getCommands() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::ConstrainedValueData> const& getConstraints() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::EnumData> const& getEnums() const;

    MCNAPI std::vector<std::string> const& getPostfixes() const;

    MCNAPI std::vector<AvailableCommandsPacketPayload::SoftEnumData> const& getSoftEnums() const;

    MCNAPI ::AvailableCommandsPacketPayload& operator=(::AvailableCommandsPacketPayload const&);

    MCNAPI ~AvailableCommandsPacketPayload();
#else // @header-generator platform
    MCAPI ~AvailableCommandsPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AvailableCommandsPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::AvailableCommandsPacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::vector<AvailableCommandsPacketPayload::EnumData>&&,
        std::vector<AvailableCommandsPacketPayload::ChainedSubcommandData>&&,
        std::vector<AvailableCommandsPacketPayload::ConstrainedValueData>&&,
        std::vector<AvailableCommandsPacketPayload::CommandData>&&,
        std::vector<AvailableCommandsPacketPayload::SoftEnumData>&&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::vector<::std::string> const&                                      enumValues,
        ::std::vector<::std::string> const&                                      chainedSubcommandValues,
        ::std::vector<::std::string> const&                                      postfixes,
        ::std::vector<::AvailableCommandsPacketPayload::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacketPayload::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>&&          softEnumData
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
};
