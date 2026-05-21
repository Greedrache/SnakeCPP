$env:PATH = "C:\raylib\w64devkit\bin;" + $env:PATH

Write-Host "Kompiliere..." -ForegroundColor Cyan
g++ src/*.cpp -o src/main.exe -I"C:\raylib\raylib\src" -L"C:\raylib\raylib\src" -lraylib -lopengl32 -lgdi32 -lwinmm -Wall -Wextra

if ($LastExitCode -eq 0) {
    Write-Host "Starte Spiel..." -ForegroundColor Green
    .\src\main.exe
} else {
    Write-Host "Fehler beim Kompilieren!" -ForegroundColor Red
}