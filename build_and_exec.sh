
# Set the compiler command
COMPILER="g++"

# Set the output executable name
OUTPUT="main.bin"

# List of .cpp files to compile
SOURCES="main.cpp src/*.cpp resources/*.cpp"

# Compile the .cpp files
echo "Compiling the project..."
$COMPILER -o $OUTPUT $SOURCES

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "Compilation successful! Executable created: $OUTPUT"

# Check if the executable exists
if [ ! -f "$OUTPUT" ]; then
    echo "Executable not found!"
    exit 1
fi

echo "Executable found: $OUTPUT"

# Give permissions to the executable
chmod +x $OUTPUT

# Run the executable with correct path
echo "Running the executable..."
./$OUTPUT