// c++ version by ftdlyc

/*
% Copyright 2012. All rights reserved.
% Author: Andreas Geiger
%         Institute of Measurement and Control Systems (MRT)
%         Karlsruhe Institute of Technology (KIT), Germany

% This is free software; you can redistribute it and/or modify it under the
% terms of the GNU General Public License as published by the Free Software
% Foundation; either version 3 of the License, or any later version.

% This software is distributed in the hope that it will be useful, but WITHOUT ANY
% WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
% PARTICULAR PURPOSE. See the GNU General Public License for more details.

% You should have received a copy of the GNU General Public License along with
% this software; if not, write to the Free Software Foundation, Inc., 51 Franklin
% Street, Fifth Floor, Boston, MA 02110-1301, USA
*/

#ifndef LIBCBDETECT_CREATE_CORRELATION_PATCH_H
#define LIBCBDETECT_CREATE_CORRELATION_PATCH_H

#include <vector>
#include <opencv2/opencv.hpp>
#include "config.h"

namespace cbdetect {

LIBCBDETECT_DLL_DECL void create_correlation_patch(std::vector<cv::Mat> &template_kernel,
                                                   double angle_1, double angle_2, int radius);

}

#endif //LIBCBDETECT_CREATE_CORRELATION_PATCH_H
