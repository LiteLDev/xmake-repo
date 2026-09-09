#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class Command;
// clang-format on

class CommandParameterData {
public:
    // CommandParameterData inner types define
    using ParseFunction = bool (CommandRegistry::*)(
        void*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const;

    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>                           mTypeIndex;
    ::ll::UntypedStorage<8, 8>                           mParseRule;
    ::ll::UntypedStorage<8, 16>                          mParseOverride;
    ::ll::TypedStorage<8, 24, std::string>               mName;
    ::ll::TypedStorage<8, 8, char const*>                mEnumNameOrPostfix;
    ::ll::TypedStorage<4, 4, int>                        mEnumOrPostfixSymbol;
    ::ll::TypedStorage<8, 8, char const*>                mChainedSubcommand;
    ::ll::TypedStorage<4, 4, int>                        mChainedSubcommandSymbol;
    ::ll::TypedStorage<4, 4, ::CommandParameterDataType> mParamType;
    ::ll::TypedStorage<4, 4, int>                        mOffset;
    ::ll::TypedStorage<4, 4, int>                        mSetOffset;
    ::ll::TypedStorage<1, 1, bool>                       mIsOptional;
    ::ll::TypedStorage<1, 1, ::CommandParameterOption>   mOptions;
    ::ll::TypedStorage<8, 8, void* (*)(::Command*, int)> mValueGetFn;
    ::ll::TypedStorage<8, 8, bool* (*)(::Command*, int)> mValueIsSetFn;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandParameterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandParameterData(
        ::Bedrock::typeid_t<CommandRegistry>,
        ::CommandRegistry::ParamParseRule const*,
        char const*,
        ::CommandParameterDataType,
        char const*,
        int,
        bool,
        void* (*)(::Command*, int),
        bool* (*)(::Command*, int)
    );

    MCNAPI ::CommandParameterData& addOptions(::CommandParameterOption);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::typeid_t<CommandRegistry>,
        ::CommandRegistry::ParamParseRule const*,
        char const*,
        ::CommandParameterDataType,
        char const*,
        int,
        bool,
        void* (*)(::Command*, int),
        bool* (*)(::Command*, int)
    );
    // NOLINTEND
};
