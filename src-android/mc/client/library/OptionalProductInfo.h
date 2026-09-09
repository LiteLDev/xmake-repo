#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Library {

enum class OptionalProductInfo : int {
    Objectives         = 0,
    LearningObjectives = 1,
    TeacherPrepNotes   = 2,
    Assessment         = 3,
    StudentActivites   = 4,
    Extensions         = 5,
    EssentialQuestions = 6,
};

}
