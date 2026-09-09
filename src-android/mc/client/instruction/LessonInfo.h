#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LessonInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCourseId;
    ::ll::TypedStorage<8, 24, std::string> mLessonId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LessonInfo();

    MCNAPI void clearLessonInfo();

    MCNAPI std::string const& getLessonId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
