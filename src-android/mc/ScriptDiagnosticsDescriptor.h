#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDiagnosticsDescriptor {
public:
    // ScriptDiagnosticsDescriptor inner types define
    enum class DataSource : uint {
        Server       = 0,
        Client       = 1,
        ServerScript = 2,
    };

    enum class DisplayType : uint {
        LineChart              = 0,
        StackedLineChart       = 1,
        StackedBarChart        = 2,
        Table                  = 3,
        MultiColumnTable       = 4,
        DynamicPropertiesTable = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                               mName;
    ::ll::TypedStorage<8, 24, std::string>                               mStatGroupId;
    ::ll::TypedStorage<4, 4, ::ScriptDiagnosticsDescriptor::DataSource>  mDataSource;
    ::ll::TypedStorage<4, 4, ::ScriptDiagnosticsDescriptor::DisplayType> mDisplayType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                mTitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                mYLabel;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                        mTickRange;
    ::ll::TypedStorage<8, 16, std::optional<double>>                     mValueScalar;
    ::ll::TypedStorage<8, 16, std::optional<double>>                     mTargetValue;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                mKeyLabel;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>   mValueLabels;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                mStatisticId;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>   mStatisticIds;
    // NOLINTEND
};
