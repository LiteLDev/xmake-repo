#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTagUpdaterContext;
// clang-format on

class VanillaBlockUpdater {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addBaseUpdater(::CompoundTagUpdaterContext&);

    MCNAPI static void addRailUpdater_1_14_0(std::string const&, ::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_10_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_12_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_13_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_14_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_15_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_16_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_16_210(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_18_10(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_19_70(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_19_80(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_10(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_20(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_30(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_40(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_50(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_60(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_70(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_20_80(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_21_0(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_21_10(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_21_20(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_21_30(::CompoundTagUpdaterContext&);

    MCNAPI static void addUpdaters_1_21_60(::CompoundTagUpdaterContext&);

    MCNAPI static void destroy();

    MCNAPI static ::CompoundTagUpdaterContext& get();

    MCNAPI static void initialize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<CompoundTagUpdaterContext>& mContext();
    // NOLINTEND
};
