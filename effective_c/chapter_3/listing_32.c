const char *show_classification(double x) {
    switch(fpclassify(x)) {
        case FP_INFINITE:   return "Inf";
        case FP_NAN:        return "Nan";
        case FP_NORMAL:     return "normal";
        case FP_SUBNORMAL:  return "subnormal";
        case FP_ZERO:       return "zero";
        default:            return "unknown";
    }
}